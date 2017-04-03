Vagrant.configure("2") do |config|
  config.vm.box = "ARTACK/debian-jessie"
  config.vm.network "forwarded_port", guest: 80, host: 8080, host_ip: "127.0.0.1", id: "http"
  config.vm.provision :shell, :path => "vm_provision/provision.sh"

  config.vm.provider "virtualbox" do |vb|
    vb.customize ["modifyvm", :id, "--cpuexecutioncap", "50", "--cpus", "1"]
    vb.memory = 1024
  end

end
